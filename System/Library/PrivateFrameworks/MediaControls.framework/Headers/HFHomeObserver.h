/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFHomeObserver <HMHomeDelegatePrivate>
@optional
-(void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
-(void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
-(void)home:(id)arg1 willExecuteActionSets:(id)arg2;
-(void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
-(void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
-(void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
-(void)home:(id)arg1 didSelectRoom:(id)arg2;
-(void)homeDidUpdateWallpaper:(id)arg1;
-(void)home:(id)arg1 didUpdateWallpaperForRoom:(id)arg2;
-(void)home:(id)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;

@end

