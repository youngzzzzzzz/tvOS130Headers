/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSHTTPURLResponse;

@interface PBMachineDataOperation : ISOperation {

	NSHTTPURLResponse* _response;

}

@property (nonatomic,retain) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
-(void)run;
-(NSHTTPURLResponse *)response;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(id)initWithURLResponse:(id)arg1 ;
@end
