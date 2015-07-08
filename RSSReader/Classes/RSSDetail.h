//
//  RSSDetail.h
//  RSSReader
//
//  Created by Westchester Gov on 7/1/15.
//  Copyright (c) 2015 Westchester Gov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RSSDetail : UIViewController <UIWebViewDelegate>

@property (nonatomic, strong) NSString *feedURL;
@property (weak, nonatomic) IBOutlet UIWebView *webView;

@end
