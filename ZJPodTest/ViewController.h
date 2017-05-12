//
//  ViewController.h
//  ZJPodTest
//
//  Created by Janven on 17/4/21.
//  Copyright © 2017年 Janven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "/GCDAsyncSocket.h"
@interface ViewController : UIViewController
@property (nonatomic,strong) GCDAsyncSocket *longConnect_socket;
@property (nonatomic,strong) GCDAsyncSocket *shortConnect_socket;

@end

