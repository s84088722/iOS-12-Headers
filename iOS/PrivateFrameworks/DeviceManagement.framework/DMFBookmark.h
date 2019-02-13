//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface DMFBookmark : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSURL *_URL;
    NSArray *_children;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)leafBookmarkWithName:(id)arg1 URL:(id)arg2;
+ (id)folderWithName:(id)arg1 children:(id)arg2 identifier:(id)arg3;
+ (id)folderWithName:(id)arg1 children:(id)arg2;
+ (id)readingListFolderWithChildren:(id)arg1;
+ (id)favoritesFolderWithChildren:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_isFolderWithIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isReadingListFolder) _Bool readingListFolder;
@property(readonly, nonatomic, getter=isFavoritesFolder) _Bool favoritesFolder;
@property(readonly, nonatomic, getter=isFolder) _Bool folder;
- (id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4;

@end

