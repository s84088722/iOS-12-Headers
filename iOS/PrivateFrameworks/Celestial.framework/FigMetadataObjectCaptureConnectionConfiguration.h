//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureConnectionConfiguration.h>

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    NSArray *_metadataIdentifiers;
    struct CGRect _metadataRectOfInterest;
}

@property(nonatomic) struct CGRect metadataRectOfInterest; // @synthesize metadataRectOfInterest=_metadataRectOfInterest;
@property(copy, nonatomic) NSArray *metadataIdentifiers; // @synthesize metadataIdentifiers=_metadataIdentifiers;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

