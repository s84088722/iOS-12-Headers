//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MarkupUI/UIBarPositioningDelegate-Protocol.h>

@class UINavigationBar, UINavigationItem;

@protocol UINavigationBarDelegate <UIBarPositioningDelegate>

@optional
- (void)navigationBar:(UINavigationBar *)arg1 didPopItem:(UINavigationItem *)arg2;
- (_Bool)navigationBar:(UINavigationBar *)arg1 shouldPopItem:(UINavigationItem *)arg2;
- (void)navigationBar:(UINavigationBar *)arg1 didPushItem:(UINavigationItem *)arg2;
- (_Bool)navigationBar:(UINavigationBar *)arg1 shouldPushItem:(UINavigationItem *)arg2;
@end

