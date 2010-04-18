//
//  HOHandItemTableViewController.h
//  Handoff
//
//  Created by Zac White on 4/17/10.
//  Copyright 2010 Gravity Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HONetwork;

@interface HOItemTableViewController : UITableViewController {
	NSMutableArray *items;
	
	HONetwork *networkController;
}

@property (nonatomic, retain) HONetwork *networkController;
@property (nonatomic, retain) NSMutableArray *items;

@end
