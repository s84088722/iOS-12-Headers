//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSASAssetCollectionChange : NSObject
{
    _Bool _wasDeleted;
    NSString *_GUID;
    NSString *_ctag;
}

@property(nonatomic) _Bool wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (void).cxx_destruct;
- (id)description;

@end

