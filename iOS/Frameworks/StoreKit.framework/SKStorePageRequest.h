//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject
{
    long long _pageStyle;
    NSDictionary *_productParameters;
    NSURL *_productURL;
}

@property(copy, nonatomic) NSURL *productURL; // @synthesize productURL=_productURL;
@property(copy, nonatomic) NSDictionary *productParameters; // @synthesize productParameters=_productParameters;
@property(nonatomic) long long productPageStyle; // @synthesize productPageStyle=_pageStyle;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

