//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface LPImageRemoteURLRepresentation : NSObject
{
    unsigned long long _scale;
    NSURL *_URL;
}

@property(readonly, retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned long long scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (id)initWithScale:(unsigned long long)arg1 URL:(id)arg2;

@end

