/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFRenderingProperties, PDFView, PDFPage, UIScrollView, UIView, PDFPageView, UIImage;

@interface PDFPageViewControllerPrivate : NSObject {

	PDFRenderingProperties* renderingProperties;
	PDFView* pdfView;
	UIEdgeInsets pageMargins;
	PDFPage* page;
	UIScrollView* scrollView;
	UIView* pageViewContainerView;
	PDFPageView* pageView;
	double minScale;
	double maxScale;
	UIImage* backgroundImage;
	int backgroundQuality;

}
@end
