//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKAnnotationView, NSString;
@protocol MKAnnotationRepresentation;

@protocol MKAnnotationRepresentation <NSObject>
- (_Bool)_shouldDeselectWhenDragged;
- (_Bool)_isPendingSelectionAnimated;
- (void)_invalidateCachedCoordinate;
- (void)_setHiddenForOffscreen:(_Bool)arg1;
- (_Bool)isPersistent;
- (void)prepareForReuse;
- (NSString *)reuseIdentifier;
- (MKAnnotationView<MKAnnotationRepresentation> *)viewRepresentation;
@end
