//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITextFieldDelegate-Protocol.h"

@class RouteSearchTextField, UITextRange;

@protocol RouteSearchTextFieldDelegate <UITextFieldDelegate>

@optional
- (void)didSelectRouteSearchTextField:(RouteSearchTextField *)arg1;
- (void)routeSearchTextField:(RouteSearchTextField *)arg1 didUpdateSelectedTextRange:(UITextRange *)arg2;
@end

