//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    struct opaqueCMFormatDescription *_formatDescription;
    struct OpaqueCMClock *_clock;
    int _sourceSubType;
}

@property(nonatomic) int sourceSubType; // @synthesize sourceSubType=_sourceSubType;
@property(retain, nonatomic) struct OpaqueCMClock *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) struct opaqueCMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

