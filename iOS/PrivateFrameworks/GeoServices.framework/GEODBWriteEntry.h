//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface GEODBWriteEntry : NSObject
{
    struct _GEOTileKey _key;
    NSData *_data;
    unsigned int _edition;
    unsigned int _set;
    unsigned int _provider;
    NSString *_etag;
}

@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) unsigned int provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) unsigned int set; // @synthesize set=_set;
@property(readonly, nonatomic) unsigned int edition; // @synthesize edition=_edition;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(struct _GEOTileKey)arg1 data:(id)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6;

@end

