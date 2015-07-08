//
//  RSSResults.h
//  RSSReader
//
//  Created by Westchester Gov on 7/1/15.
//  Copyright (c) 2015 Westchester Gov. All rights reserved.
// 

#import <UIKit/UIKit.h>

@interface RSSResults : UITableViewController {
    NSDateFormatter *formatter;
}

@property (nonatomic, strong) NSArray *itemsFiltered;

@end
