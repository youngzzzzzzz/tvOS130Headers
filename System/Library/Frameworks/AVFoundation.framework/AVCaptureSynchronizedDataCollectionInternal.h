/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutput, AVCaptureSynchronizedData, NSArray;

@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {

	AVCaptureOutput* dataOutputs[4];
	AVCaptureSynchronizedData* synchronizedData[4];
	char count;
	unsigned long long changeSeed;
	SCD_Struct_AV7 creationTime;
	NSArray* possibleDataOutputs;

}
@end

