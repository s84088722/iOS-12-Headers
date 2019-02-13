//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSFaviconProviderIconInfo : NSObject
{
    _Bool _hasGeneratedResolutions;
    _Bool _isRejectedResource;
    NSString *_pageURLString;
    NSString *_iconURLString;
    NSString *_UUIDString;
    NSDate *_dateAdded;
    struct CGSize _size;
}

@property(readonly, nonatomic) _Bool isRejectedResource; // @synthesize isRejectedResource=_isRejectedResource;
@property(readonly, nonatomic) _Bool hasGeneratedResolutions; // @synthesize hasGeneratedResolutions=_hasGeneratedResolutions;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(readonly, copy, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(readonly, copy, nonatomic) NSString *pageURLString; // @synthesize pageURLString=_pageURLString;
- (void).cxx_destruct;
- (id)initWithPageURLString:(id)arg1 iconURLString:(id)arg2 UUIDString:(id)arg3 dateAdded:(id)arg4 size:(struct CGSize)arg5 hasGeneratedResolutions:(_Bool)arg6 isRejectedResource:(_Bool)arg7;
- (id)init;

@end

