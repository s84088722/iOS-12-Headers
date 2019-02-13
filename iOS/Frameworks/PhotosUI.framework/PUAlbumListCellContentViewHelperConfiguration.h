//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PUPhotoDecoration;

__attribute__((visibility("hidden")))
@interface PUAlbumListCellContentViewHelperConfiguration : NSObject
{
    _Bool _allowsEmailInSubtitle;
    _Bool _showsDeleteButtonOnCellContentView;
    _Bool _hasRoundedCorners;
    _Bool _shouldUseTableView;
    long long _cellContentViewLayout;
    unsigned long long _stackViewStyle;
    unsigned long long _folderStackViewStyle;
    long long _imageContentMode;
    NSString *_albumSubtitleFormat;
    NSString *_nameOfEmptyAlbumPlaceholderImage;
    NSString *_nameOfEmptySharedAlbumPlaceholderImage;
    NSString *_nameOfAddSharedAlbumPlaceholderImage;
    NSString *_nameOfHiddenAlbumPlaceholderImage;
    NSString *_nameOfRecentlyDeletedAlbumPlaceholderImage;
    PUPhotoDecoration *_photoDecoration;
    double _gridMargin;
    double _gridItemSpacing;
    double _posterSquareCornerRadius;
    double _posterSubitemCornerRadius;
    double _dynamicTitleLeading;
    double _dynamicSubtitleleading;
    double _dynamicTopLeading;
    struct CGSize _stackSize;
    struct CGSize _pixelSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

+ (id)defaultConfiguration;
@property(nonatomic) double dynamicTopLeading; // @synthesize dynamicTopLeading=_dynamicTopLeading;
@property(nonatomic) double dynamicSubtitleleading; // @synthesize dynamicSubtitleleading=_dynamicSubtitleleading;
@property(nonatomic) double dynamicTitleLeading; // @synthesize dynamicTitleLeading=_dynamicTitleLeading;
@property(nonatomic) double posterSubitemCornerRadius; // @synthesize posterSubitemCornerRadius=_posterSubitemCornerRadius;
@property(nonatomic) double posterSquareCornerRadius; // @synthesize posterSquareCornerRadius=_posterSquareCornerRadius;
@property(nonatomic) double gridItemSpacing; // @synthesize gridItemSpacing=_gridItemSpacing;
@property(nonatomic) double gridMargin; // @synthesize gridMargin=_gridMargin;
@property(nonatomic) struct UIEdgeInsets stackPerspectiveInsets; // @synthesize stackPerspectiveInsets=_stackPerspectiveInsets;
@property(nonatomic) struct UIOffset stackPerspectiveOffset; // @synthesize stackPerspectiveOffset=_stackPerspectiveOffset;
@property(nonatomic) struct UIOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property(retain, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(copy, nonatomic) NSString *nameOfRecentlyDeletedAlbumPlaceholderImage; // @synthesize nameOfRecentlyDeletedAlbumPlaceholderImage=_nameOfRecentlyDeletedAlbumPlaceholderImage;
@property(copy, nonatomic) NSString *nameOfHiddenAlbumPlaceholderImage; // @synthesize nameOfHiddenAlbumPlaceholderImage=_nameOfHiddenAlbumPlaceholderImage;
@property(copy, nonatomic) NSString *nameOfAddSharedAlbumPlaceholderImage; // @synthesize nameOfAddSharedAlbumPlaceholderImage=_nameOfAddSharedAlbumPlaceholderImage;
@property(copy, nonatomic) NSString *nameOfEmptySharedAlbumPlaceholderImage; // @synthesize nameOfEmptySharedAlbumPlaceholderImage=_nameOfEmptySharedAlbumPlaceholderImage;
@property(copy, nonatomic) NSString *nameOfEmptyAlbumPlaceholderImage; // @synthesize nameOfEmptyAlbumPlaceholderImage=_nameOfEmptyAlbumPlaceholderImage;
@property(copy, nonatomic) NSString *albumSubtitleFormat; // @synthesize albumSubtitleFormat=_albumSubtitleFormat;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(nonatomic) unsigned long long folderStackViewStyle; // @synthesize folderStackViewStyle=_folderStackViewStyle;
@property(nonatomic) unsigned long long stackViewStyle; // @synthesize stackViewStyle=_stackViewStyle;
@property(nonatomic) long long cellContentViewLayout; // @synthesize cellContentViewLayout=_cellContentViewLayout;
@property(nonatomic) _Bool shouldUseTableView; // @synthesize shouldUseTableView=_shouldUseTableView;
@property(nonatomic) _Bool hasRoundedCorners; // @synthesize hasRoundedCorners=_hasRoundedCorners;
@property(nonatomic) _Bool showsDeleteButtonOnCellContentView; // @synthesize showsDeleteButtonOnCellContentView=_showsDeleteButtonOnCellContentView;
@property(nonatomic) _Bool allowsEmailInSubtitle; // @synthesize allowsEmailInSubtitle=_allowsEmailInSubtitle;
- (void).cxx_destruct;
- (void)configureWithSpec:(id)arg1;

@end

