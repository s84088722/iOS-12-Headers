//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

@class SXStrokeStyle;

@interface SXBorder : SXJSONObject
{
}

- (_Bool)isSolid;
- (_Bool)shouldBeDotted;
- (id)defaultStrokeStyle;

// Remaining properties
@property(readonly, nonatomic) SXStrokeStyle *all; // @dynamic all;
@property(readonly, nonatomic) SXStrokeStyle *bottom; // @dynamic bottom;
@property(readonly, nonatomic) SXStrokeStyle *left; // @dynamic left;
@property(readonly, nonatomic) SXStrokeStyle *right; // @dynamic right;
@property(readonly, nonatomic) SXStrokeStyle *top; // @dynamic top;

@end

