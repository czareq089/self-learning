using Godot;
using System;
using NoiseTest;

public partial class Generation : Sprite2D
{
	// Called when the node enters the scene tree for the first time.
	public override void _Ready()
	{
		Sprite2D sprite = GetNode<Sprite2D>("Sprite2D");
		OpenSimplexNoise noise = new OpenSimplexNoise();
		
		
		int height = 648;
		int width = 1152;
		
		Image image = new Image();
		
		
		for (int x = 0; x < width; x++)
		{
			for (int y = 0; y < height; y++)
			{
				
			}
		}
	}

	// Called every frame. 'delta' is the elapsed time since the previous frame.
	public override void _Process(double delta)
	{
	}
}
