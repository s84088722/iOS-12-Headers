//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKSearchFoundationRichText.h>

__attribute__((visibility("hidden")))
@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText
{
    _Bool _reviewResolved;
}

@property(getter=isReviewResolved) _Bool reviewResolved; // @synthesize reviewResolved=_reviewResolved;
- (_Bool)isRichTextResolved;
- (void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3;
- (void)resolveReviewStringWithProviderNameByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3;

@end

