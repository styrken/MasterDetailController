MasterDetailController
======================

A master detail controller that works like the facebook sliding menu/view

You need to provide a master controller and detail controller. These controllers should subclass UIViewController and provide a view.

How-To
-------------------------

in AppDelegate application:didFinishLaunchingWithOptions: set MasterDetailViewController as rootview.

* Create two view controllers (one that serves a master view, another that serves a detail view)
* Init MasterViewController with these two controllers 
* Add MasterViewController as rootview (or as some other view that suit you)

```objective-c
  UIViewController *master = [[UIViewController alloc] initWithNibName:@"MasterView" bundle:nil]; // Just dummy controller with a xib as view 
  DetailViewController *detail = [[DetailViewController alloc] initWithNibName:@"DetailView" bundle:nil]; // This does a little more: adds a toggle button

  self.viewController = [[[MasterDetailController alloc] initWithMasterViewController:master detailViewController:detail] autorelease];
  self.window.rootViewController = self.viewController;
```
Hope you figure out how it works :-)


Images
-------------------------

<table>
<tr>
      <th>![image1](https://raw.github.com/styrken/MasterDetailController/master/image1.png)</th>
	  <th>![image2](https://raw.github.com/styrken/MasterDetailController/master/image2.png)</th>
</tr>
</table>



