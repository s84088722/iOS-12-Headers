//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DirectionIntentItemProvider : NSObject
{
}

- (void)searchFieldItemWithResolveditem:(id)arg1 localSearchCompletionFromServer:(id)arg2 searchResultFromServer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)directionItemWithDirectionIntent:(id)arg1 localSearchCompletionOrigin:(id)arg2 localSearchCompletionDestination:(id)arg3 searchResultOrigin:(id)arg4 searchResultDestination:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)directionItemWithDirectionIntent:(id)arg1 searchResults:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)directionItemWithLocalSearchCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

