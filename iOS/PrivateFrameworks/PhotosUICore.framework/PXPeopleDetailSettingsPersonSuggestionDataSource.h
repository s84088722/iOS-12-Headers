//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDetailSettingsDataSource-Protocol.h>

@class NSArray, NSString;

@interface PXPeopleDetailSettingsPersonSuggestionDataSource : NSObject <PXPeopleDetailSettingsDataSource>
{
    NSString *_title;
    NSArray *_personSuggestions;
}

@property(retain, nonatomic) NSArray *personSuggestions; // @synthesize personSuggestions=_personSuggestions;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)modelObjectForIndex:(long long)arg1;
@property(readonly, nonatomic) long long action;
- (long long)verifyTypeAtIndex:(long long)arg1;
- (unsigned long long)faceCount:(long long)arg1;
- (id)personNameAtIndex:(long long)arg1;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) _Bool hasMoreDetails;
- (id)initWithTitle:(id)arg1 personSuggestions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

