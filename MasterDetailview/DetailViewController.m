//
//  DetailViewController.m
//  MasterDetailview
//
//  Created by Rasmus Styrk on 8/26/12.
//  Copyright (c) 2012 Styrk-IT. All rights reserved.
//

#import "DetailViewController.h"
#import "MasterDetailController.h"

@implementation DetailViewController

- (IBAction)toggleMaster:(id)sender 
{
    // MasterDetailController sets its masterController and detailController's 
    // parenViewController property so we can access the control through this var
    
    MasterDetailController *master = (MasterDetailController*) self.parentViewController;
    [master toggleMasterView];
}

@end
