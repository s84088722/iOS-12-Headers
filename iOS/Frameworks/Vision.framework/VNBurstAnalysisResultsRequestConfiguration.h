//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNBurstAnalysisResultsRequestConfiguration : VNRequestConfiguration
{
    _Bool _includeClusters;
    _Bool _includeAllImageIdentifiers;
    _Bool _includeAllImageStats;
}

@property(nonatomic) _Bool includeAllImageStats; // @synthesize includeAllImageStats=_includeAllImageStats;
@property(nonatomic) _Bool includeAllImageIdentifiers; // @synthesize includeAllImageIdentifiers=_includeAllImageIdentifiers;
@property(nonatomic) _Bool includeClusters; // @synthesize includeClusters=_includeClusters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

