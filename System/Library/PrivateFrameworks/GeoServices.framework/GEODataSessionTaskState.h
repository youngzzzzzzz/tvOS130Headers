/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOCapturedState.h>

@interface GEODataSessionTaskState : GEOCapturedState {

	long long _rawPointer;
	unsigned _taskIdentifier;
	long long _completedSubtaskPointer;
	long long _urlTaskPointer;
	double _now;
	double _startTime;
	double _endTime;
	SCD_Struct_GE94 _requestKind;
	unsigned long long _outgoingPayloadSize;

}
+(BOOL)supportsSecureCoding;
+(const char*)decoderType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
