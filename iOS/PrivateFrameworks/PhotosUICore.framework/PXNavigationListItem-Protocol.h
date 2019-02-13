//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PHCollection;
@protocol PXGridPresentation;

@protocol PXNavigationListItem <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *visualDescription;
@property(readonly, nonatomic) PHCollection *collection;
@property(readonly, nonatomic) long long indentationLevel;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded;
@property(readonly, nonatomic, getter=isExpandable) _Bool expandable;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *imageName;
@property(readonly, nonatomic) NSString *accessoryTitle;
@property(readonly, nonatomic) NSString *title;

@optional
- (struct NSObject *)viewControllerForCollectionWithGridPresentation:(id <PXGridPresentation>)arg1;
- (const struct __CFString *)aggregateDictionaryKey;
@end

