#pragma once

#include "PCGContext.h"
#include "PCGSettings.h"
#include "ZoneShapeComponent.h"
#include "PGLCreateZoneShape.generated.h"

/** Node for creating n-gon zone shapes and spawning actors based on input data points. */
UCLASS(BlueprintType, ClassGroup = (Procedural))
class UPGLCreateZoneShapeNode : public UPCGSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings interface

	UPROPERTY(meta = (PCG_Overridable))
	TSoftObjectPtr<AActor> TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zone Shape Settings")
	FName CrossingTransformAttributeName = "CrossingTransform"; 
	
#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("PGLCreateZoneShape")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PGLCreateZoneShapeNode", "NodeTitle", "PGLCreateZoneShape"); }
	virtual FText GetNodeTooltipText() const override;
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif
	virtual bool HasDynamicPins() const override { return true; }
	virtual EPCGDataType GetCurrentPinTypes(const UPCGPin* InPin) const override;

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;

	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings
};

class FPGLCreateZoneShapeElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};