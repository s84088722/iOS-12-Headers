//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceprintGenerator : VNDetector
{
    shared_ptr_b26ea6de m_FaceDescriptorImpl;
    struct shared_ptr<vision::mod::FaceFrontalizer> m_FaceFrontalizerImpl;
    struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> m_DescriptorAugmenter;
    struct shared_ptr<unsigned char> m_FaceFrontalizerWorkingBuffer;
    struct vImage_Buffer m_FaceFrontalizerImageBuffer;
    struct _Geometry2D_size2D_ m_RequiredImageSize;
    _Bool _useLowPriorityMode;
    unsigned long long _metalContextPriority;
    unsigned long long _length;
}

+ (_Bool)shouldDumpDebugIntermediates;
+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) _Bool useLowPriorityMode; // @synthesize useLowPriorityMode=_useLowPriorityMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)printDebugInfoFor:(struct __CVBuffer *)arg1 imageBuffer:(id)arg2 originalImageLumaCrop:(struct vImage_Buffer)arg3 faceBBoxInLumaCropCoordinates:(struct _Geometry2D_rect2D_)arg4 magnifiedBBoxInLumaCropCoordinates:(struct _Geometry2D_rect2D_)arg5;
- (_Bool)isFaceprinterCompatibleWithFaceprinterCreatedWithOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
@property(readonly, nonatomic) unsigned long long metalContextPriority;

@end

