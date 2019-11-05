/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <cloudphotod/cloudphotod-Structs.h>
@interface CPLCloudKitFakeDynamicDerivatives : NSObject
+(id)fakeDerivativesDescription;
+(id)_metadataWithoutOrientation:(id)arg1 ;
+(id)_outputOptionsFromSource:(CGImageSourceRef)arg1 matchingResource:(id)arg2 ;
+(BOOL)_transferImageFromSource:(CGImageSourceRef)arg1 toDestination:(CGImageDestinationRef)arg2 matchingResource:(id)arg3 ;
+(BOOL)allowsFakeDerivatives;
+(void)setAllowsFakeDerivatives:(BOOL)arg1 ;
+(BOOL)usesFakeDerivatives;
+(id)overriddenResourcesFromResources:(id)arg1 ;
+(BOOL)isFakeDerivative:(id)arg1 ;
+(unsigned long long)realResourceTypeForResource:(id)arg1 ;
+(BOOL)transformFromURL:(id)arg1 fileType:(id)arg2 toTargetURL:(id)arg3 matchingResource:(id)arg4 error:(id*)arg5 ;
+(id)transformData:(id)arg1 fileType:(id)arg2 matchingResource:(id)arg3 error:(id*)arg4 ;
@end
