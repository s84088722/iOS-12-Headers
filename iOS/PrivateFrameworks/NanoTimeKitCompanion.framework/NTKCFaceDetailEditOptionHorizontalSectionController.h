//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionCellDelegate-Protocol.h>

@class NSMutableArray, NSString, NTKCFaceDetailEditOptionCell;

@interface NTKCFaceDetailEditOptionHorizontalSectionController : NTKCFaceDetailEditOptionSectionController <NTKCFaceDetailEditOptionCellDelegate>
{
}

- (Class)editCellClass;
- (void)editOptionCell:(id)arg1 didSelectOptionAtIndex:(long long)arg2;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)reloadActionRow;
- (void)setSelectedOptions:(id)arg1;
- (void)didSelectRow:(long long)arg1;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;

// Remaining properties
@property(retain, nonatomic) NTKCFaceDetailEditOptionCell *cell; // @dynamic cell;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *rows; // @dynamic rows;
@property(readonly) Class superclass;

@end

