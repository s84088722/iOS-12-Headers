//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSTMasterLayout;

@interface TSTLayoutTask : NSObject
{
    TSTMasterLayout *mMasterLayout;
    NSMutableArray *mCellStatesToLayout;
}

@property(retain, nonatomic) NSMutableArray *cellStatesToLayout; // @synthesize cellStatesToLayout=mCellStatesToLayout;
- (void)flushToGlobalCaches;
- (void)dealloc;
- (id)initWithMasterLayout:(id)arg1;

@end

