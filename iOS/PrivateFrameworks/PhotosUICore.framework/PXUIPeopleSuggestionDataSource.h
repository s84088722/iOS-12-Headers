//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>
#import <PhotosUICore/PXPeopleSuggestionManagerDataSource-Protocol.h>

@class NSArray, NSString, PHFetchResult;

@interface PXUIPeopleSuggestionDataSource : NSObject <PHPhotoLibraryChangeObserver, PXPeopleSuggestionManagerDataSource>
{
    unsigned long long _initialPageLimit;
    unsigned long long _suggestionFetchType;
    unsigned long long _flowType;
    NSArray *_mergeCandidates;
    PHFetchResult *_mergeCandidateFetchResult;
}

@property(copy, nonatomic) PHFetchResult *mergeCandidateFetchResult; // @synthesize mergeCandidateFetchResult=_mergeCandidateFetchResult;
@property(copy, nonatomic) NSArray *mergeCandidates; // @synthesize mergeCandidates=_mergeCandidates;
@property(nonatomic) unsigned long long flowType; // @synthesize flowType=_flowType;
@property(nonatomic) unsigned long long suggestionFetchType; // @synthesize suggestionFetchType=_suggestionFetchType;
@property(nonatomic) unsigned long long initialPageLimit; // @synthesize initialPageLimit=_initialPageLimit;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg1;
- (void)stopListeningForLibraryChanges;
- (void)startListeningForLibraryChanges;
- (id)commitSuggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;
- (_Bool)cancelSuggestionForPerson:(id)arg1 withToken:(id)arg2 error:(id *)arg3;
- (id)suggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchAndCacheMergeCandidatesForPerson:(id)arg1;
- (id)initWithFlowType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

