//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableItem, FPItem, NSString;

@interface CSFPItem : NSObject
{
    FPItem *_internal;
}

+ (id)itemWithFileURL:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) CSSearchableItem *searchableItem;
@property(readonly, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) NSString *providerIdentifier;
- (id)initWithFPItem:(id)arg1;

@end

