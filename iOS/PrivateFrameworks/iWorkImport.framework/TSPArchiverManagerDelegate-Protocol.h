//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSPArchiver, TSPArchiverManager, TSPObject;

@protocol TSPArchiverManagerDelegate <NSObject>

@optional
- (_Bool)archiverManager:(TSPArchiverManager *)arg1 shouldDelayArchivingObject:(TSPObject *)arg2;
- (void)archiverManager:(TSPArchiverManager *)arg1 didCreateArchiver:(TSPArchiver *)arg2;
@end

