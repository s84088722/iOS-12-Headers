//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NTKCFaceDetailActionCell;
@protocol NTKCFaceDetailActionSectionDelegate;

@interface NTKCFaceDetailActionSectionController : NTKCFaceDetailSectionController
{
    id <NTKCFaceDetailActionSectionDelegate> _delegate;
    NTKCFaceDetailActionCell *_selectCell;
    NTKCFaceDetailActionCell *_deleteCell;
}

@property(retain, nonatomic) NTKCFaceDetailActionCell *deleteCell; // @synthesize deleteCell=_deleteCell;
@property(retain, nonatomic) NTKCFaceDetailActionCell *selectCell; // @synthesize selectCell=_selectCell;
@property(nonatomic) __weak id <NTKCFaceDetailActionSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_actionForRow:(long long)arg1;
- (id)_spacerCell;
- (void)didSelectRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)_commonInit;

@end

