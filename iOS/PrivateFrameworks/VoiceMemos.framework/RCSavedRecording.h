//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <VoiceMemos/RCMutableRecording-Protocol.h>
#import <VoiceMemos/UIActivityItemSource-Protocol.h>

@class AVAsset, CLLocation, CSSearchableItem, NSDate, NSString, NSURL;

@interface RCSavedRecording : NSManagedObject <RCMutableRecording, UIActivityItemSource>
{
    AVAsset *_avAsset;
    _Bool _pathWasInvalid;
    _Bool _ignoreChangeForEntityRevision;
    _Bool _hasPendingChangeAffectingEntityRevision;
    long long revisionID;
}

+ (id)localizedStringForRecordingLabel:(long long)arg1;
+ (id)propertiesAffectingEntityRevision;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
@property(nonatomic) long long revisionID; // @synthesize revisionID;
@property(readonly, nonatomic) _Bool hasPendingChangeAffectingEntityRevision; // @synthesize hasPendingChangeAffectingEntityRevision=_hasPendingChangeAffectingEntityRevision;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)_activityURLCreateIfNecessary:(_Bool)arg1;
- (void)_validatePath;
@property(readonly, nonatomic) AVAsset *avAsset;
@property(readonly, nonatomic) _Bool evicted;
- (void)setEditing:(_Bool)arg1;
@property(readonly, nonatomic) _Bool editing;
- (void)setManuallyRenamed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool manuallyRenamed;
- (void)setPlayable:(_Bool)arg1;
@property(readonly, nonatomic) _Bool playable;
- (void)setEvictionDate:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *evictionDate;
- (id)detailLabel;
- (id)_labelAllowingEmptyString:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSURL *URIRepresentation;
@property(readonly, copy, nonatomic) NSURL *url;
- (void)setPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *path;
@property(nonatomic) long long recordingID;
- (void)setITunesPersistentID:(long long)arg1;
@property(readonly, nonatomic) long long iTunesPersistentID;
- (void)setCustomLabel:(id)arg1;
@property(readonly, copy, nonatomic) NSString *customLabel;
@property(readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
- (id)label;
@property(readonly, copy, nonatomic) NSString *title;
- (void)setTitle:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (void)setLabelPreset:(long long)arg1;
- (long long)labelPreset;
- (void)setLocation:(id)arg1;
@property(readonly, copy, nonatomic) CLLocation *location;
- (void)setDuration:(double)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool isContentBeingModified;
- (void)willSave;
- (void)willChangeValueForKey:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, copy, nonatomic) CSSearchableItem *searchableItem;

// Remaining properties
@property(readonly, copy, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool pendingRestore;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool synced;
@property(readonly, copy, nonatomic) NSString *uniqueID;

@end

