//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, PBBridgeBarcode, UIImageView, UILabel;

@interface PBBridgeBarcodeStickerView : UIView
{
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    _Bool _drawBarcode;
    PBBridgeBarcode *_barcode;
}

+ (struct CGSize)_sizeForBarcode:(id)arg1;
+ (struct PKBarcodeQuietZone)_quiteZoneForBarcode:(id)arg1;
@property(retain, nonatomic) PBBridgeBarcode *barcode; // @synthesize barcode=_barcode;
@property(readonly, nonatomic) UIView *matteView; // @synthesize matteView=_matteView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_generateMatteRect:(struct CGRect *)arg1 barcodeRect:(struct CGRect *)arg2 altTextRect:(struct CGRect *)arg3 boundingSize:(struct CGSize)arg4;
- (id)_resizedBarcode:(id)arg1 desiredSize:(struct CGSize)arg2;
- (void)_updateValidity;
- (void)dealloc;
- (id)initWithBarcode:(id)arg1;
- (struct CGSize)_varianceForBarcode:(id)arg1;

@end

