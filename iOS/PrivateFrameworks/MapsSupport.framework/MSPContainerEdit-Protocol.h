//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@protocol MSPContainerEdit <NSObject>
- (void)ifAddition:(void (^)(id <MSPContainerEditAddition>))arg1 ifRemoval:(void (^)(id <MSPContainerEditRemoval>))arg2 ifReplacement:(void (^)(id <MSPContainerEditReplacement>))arg3 ifContentUpdate:(void (^)(id <MSPContainerEditContentUpdate>))arg4 ifReplacedEntirely:(void (^)(id <MSPContainerEditReplacedEntirely>))arg5;
@end

