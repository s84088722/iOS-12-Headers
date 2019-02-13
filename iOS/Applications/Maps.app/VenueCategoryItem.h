//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSearchCategory;
@protocol GEOVenueIdentifier;

__attribute__((visibility("hidden")))
@interface VenueCategoryItem : NSObject
{
    _Bool _isAutoCompleteCategory;
    _Bool _shouldFrameMapViewport;
    int _displayMode;
    GEOSearchCategory *_searchCategory;
    id <GEOVenueIdentifier> _venueIdentifier;
}

@property(readonly, nonatomic) _Bool shouldFrameMapViewport; // @synthesize shouldFrameMapViewport=_shouldFrameMapViewport;
@property(readonly, nonatomic) _Bool isAutoCompleteCategory; // @synthesize isAutoCompleteCategory=_isAutoCompleteCategory;
@property(readonly, nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) id <GEOVenueIdentifier> venueIdentifier; // @synthesize venueIdentifier=_venueIdentifier;
@property(readonly, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSearchCategory:(id)arg1 venueIdentifier:(id)arg2 displayMode:(int)arg3 isAutoCompleteCategory:(_Bool)arg4 shouldFrameMapViewport:(_Bool)arg5;

@end
