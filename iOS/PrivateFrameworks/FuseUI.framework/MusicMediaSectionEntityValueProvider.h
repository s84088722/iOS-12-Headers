//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityValueProviding-Protocol.h>

@class NSString;
@protocol MusicEntityValueProviding;

@interface MusicMediaSectionEntityValueProvider : NSObject <MusicEntityValueProviding>
{
    id <MusicEntityValueProviding> _mediaEntityValueProvider;
    NSString *_sectionTitle;
}

@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) id <MusicEntityValueProviding> mediaEntityValueProvider; // @synthesize mediaEntityValueProvider=_mediaEntityValueProvider;
- (void).cxx_destruct;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)entityUniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

