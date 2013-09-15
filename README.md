BookCrawler
===========
FUNCTION
/// @file README
/// @brief crawl books infoamtion from 360buy ,it includes bookname authorname publicdate Thehtml and its productnum,store those book's information to the global::bookinfolist.
/// @author ght guo 海涛
/// @version zmcc1.0
/// @date 2013-02-03



// Copyright (C) 
// 
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
// 

HOW TO USE IT:
./bin/zmcc
./bin/zmcc yourconffilename

++自己独立完成,虽然不是很大，但是清楚了整个爬虫流程和架构。
++重点使用了工厂设计模式,方便扩展（非图书类目标也可以成为下一阶段的爬取目标）

采用单线成并且依次获取网页内容中的下一页，插入到待爬取的列表中--->抓取所有Arts & Photography（艺术与摄影)的图书，用时323.895s.
抓取7950 图书记录用时 323.895s  ---> 24.6个/s 的速度。  
图书信息包括 （图书名称/作者/价钱/出版时间/图书介绍网页）  

所有的图书类别有807个。若每一组平均花费300s，则需要66.6小时才可以获取完所有图书信息。
目前程序 是单线程程序，分析和下载不能同时进行，造成分析的时间里网络处于闲置状态。下一步改进成多线程，分析和爬取分开进行。

<关于线程池
    本程序需要利用线程来实现网络的充分利用，（因为网络才是最大的瓶颈）。所以要充分利用网络，很明显线程数量不是越多网络利用率就越高的。
    我们需要找到一个线程数量的最大值，由于任务量比较多，故而需要线程池来预先创建n个线程，当线程空闲时，进入下一任务，而不是重复的创建和销毁进程。因为重复的创建和销毁会耗费一定的时间，当任务较多时，时间浪费较多。
>

<
    实验发现：下载网页的时间分别为1.48849/0.544894 /0.264063/0.982866/0.60374
             而处理网页的时间则为 0.001478/0.003299/0.003469/0.003347/0.003479
             双方差了100倍左右所以为了程序设计时处理多线程共享队列 并且 免去存储 context 而耗费大量内存 顾下载与处理不分离(在一个线程里操作即可)。
>

第二季：

5线程5链接（很多链接都终止异常，提前结束,解析过程中错误). 网络速度达到8k-20k之间。下载速度为 Time:1140.36s 分析出18731个图书 = 16.4 个/s
。
速度低于单进程，判断网速不好的原因。

第三季：
62.63s 收获1615个图书。平均26个/s。

实验室爬取：
平均52.37个/s.
搜索下载了 88176本书的信息(共101个链接，360 总共包括了807个图书链接)，用时：1683.48s 。 = 28 分。
所以目前更新一次大概需要3.74个小时。
