/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class NSData, NSString;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {

	id<MFGuaranteedCollectingDataConsumer> _rawDataConsumer;
	NSData* _strippedData;
	unsigned long long _length;
	unsigned _seenNetworkLineEndings : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)purge;
-(void)done;
-(id)copyDataWithUnixLineEndings;
@end
