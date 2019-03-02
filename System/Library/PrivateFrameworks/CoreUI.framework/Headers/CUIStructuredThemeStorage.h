/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage <NSObject>
@optional
-(unsigned long long)colorSpaceID;

@required
-(id)renditionWithKey:(const renditionkeytoken*)arg1;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3;
-(double)fontSizeForFontSizeType:(id)arg1;
-(unsigned)distilledInCoreUIVersion;
-(BOOL)getPhysicalColor:(colordef*)arg1 withName:(id)arg2;
-(BOOL)hasPhysicalColorWithName:(id)arg1;
-(unsigned)documentFormatVersion;
-(unsigned)authoredWithSchemaVersion;
-(id)catalogGlobals;

@end
