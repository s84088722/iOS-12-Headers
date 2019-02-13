//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGTitleSpecArgument.h>

@class NSSet;

@interface PGTitleSpecLocationArgument : PGTitleSpecArgument
{
    _Bool _filterLocations;
    unsigned long long _type;
    NSSet *_usedLocationNodes;
}

+ (id)argumentWithLocationType:(unsigned long long)arg1 filterLocations:(_Bool)arg2;
@property(retain) NSSet *usedLocationNodes; // @synthesize usedLocationNodes=_usedLocationNodes;
@property(readonly) _Bool filterLocations; // @synthesize filterLocations=_filterLocations;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_generateLocationTitleWithOptions:(id)arg1;
- (id)_generateBusinessItemTitleWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)initWithLocationType:(unsigned long long)arg1 filterLocations:(_Bool)arg2;

@end

