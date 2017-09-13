//
//  VodPlayController.h
//  KSYPlayerDemo
//
//  Created by devcdl on 2017/9/11.
//  Copyright © 2017年 kingsoft. All rights reserved.
//

#import "PlayController.h"

@class PlayerViewModel;

@interface VodPlayController : PlayController

@property (nonatomic, strong) PlayerViewModel      *playerViewModel;

@property (nonatomic, assign) BOOL fullScreen;

- (void)suspendHandler;

- (void)recoveryHandler;

- (void)stopSuspend;

@end
