/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivityItemProvider.h>
#import <UIKit/UIActivityItemApplicationExtensionSource.h>

@class _SFQuickLookDocument, NSString;

@interface _SFDownloadActivityItemProvider : _SFActivityItemProvider <UIActivityItemApplicationExtensionSource> {

	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,retain) _SFQuickLookDocument * quickLookDocument;              //@synthesize quickLookDocument=_quickLookDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQuickLookDocument:(id)arg1 URL:(id)arg2 ;
-(_SFQuickLookDocument *)quickLookDocument;
-(void)setQuickLookDocument:(_SFQuickLookDocument *)arg1 ;
-(id)item;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerApplicationExtensionItem:(id)arg1 ;
-(id)pageTitle;
@end
