//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MapsSuggestionsEntry, UIView, UIViewController;

@protocol MapsSuggestionsDeleteActionDelegate <NSObject>
- (void)viewController:(UIViewController *)arg1 removeMapsSuggestionsEntry:(MapsSuggestionsEntry *)arg2 sourceView:(UIView *)arg3 sourceRect:(struct CGRect)arg4 completion:(void (^)(_Bool, long long))arg5;
@end

