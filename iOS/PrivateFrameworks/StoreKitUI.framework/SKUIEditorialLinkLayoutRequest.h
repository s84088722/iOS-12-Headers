//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUILayoutRequest-Protocol.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest>
{
    NSArray *_links;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSArray *links; // @synthesize links=_links;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) Class layoutClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

