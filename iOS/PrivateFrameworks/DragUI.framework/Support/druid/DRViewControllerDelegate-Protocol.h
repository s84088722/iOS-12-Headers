//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DRViewController, NSIndexSet;
@protocol _DUIClientSessionCommon;

@protocol DRViewControllerDelegate <NSObject>
- (void)viewController:(DRViewController *)arg1 requestImagesForSessionID:(unsigned int)arg2 client:(id <_DUIClientSessionCommon>)arg3 itemIndexes:(NSIndexSet *)arg4;
@end

